# Our software development philosophy

At Rokubun we want all our software developers (from engineers to front-end developers) to embrace an **end-to-end philosophy for the full lifecycle of software development**, which goes beyond simple coding. This is a summary of our code development practices:

- Develop your code locally in a virtualized environment, using **[Docker](https://www.docker.com/)** containers.
- **Test Driven Development**: first think and implement the tests you need in order to have your code working and validated. Then, and only then, implement the actual code so that the test(s) first compile and then pass.
- "If you are brave to code, you are also brave to deploy to production" ([Carlos Buenosvinos](https://twitter.com/buenosvinos) dixit).
- Obviously, code versioning tools are a must, we use **git** and we upload our code at our internal Gitlab instance or, for code we want to distribute publicly, we use **[github](https://github.com/rokubun)**
- Our code versioning strategy is based on **[Trunk development](https://trunkbaseddevelopment.com/)**, we avoid using branches for features, fixes, ..., we just have the master branch.
- **CI/CD** (Continuous Integration / Continuous Development). We love automate things so they can relieve us from the burden of routinely tasks. Our code repositories have the necessary configuration so that tests are executed automatically whenever someone pushes a commit to the repository and, if tests are ok, further tasks are performed as needed (publication of Python wheels at PyPi, publication of Docker images at Amazon Web Services, ...)
- Code traceability and **automatic code version**. In line with our CI/CD philosophy, we use a strict convention for [semantic versioning](https://semver.org/) for the commit messages of our code. This allows the CI/CD system to autotag every commit done to the code and enhances the traceability of our code base. Sorry, but "_New version_" as commit message does not conform to our convention and thus is not allowed at Rokubun 😜
- **Memory footprint**. When working with C (or other lower level languages) use **valgrind** tools (or similar) to avoid memory leaks.
